var blockSize = 50;
var Column = 11;
var Row = 11;
var Index = Column * Row;
var board = new Array(Index);
var component;

//Index function used instead of a 2D array
function index(column, row) {
    return column + (row * Column);
}

function startNewGame() {
    //Initialize Board
    board = new Array(Index);
    for (var i = 0; i < Column; i++) {
        if(i == 0 || i == Column-1){
            for (var j = 0; j < Row; j++) {
                board[index(i, j)] = null;
                createBlock(i, j);
            }
        }
        else {
            board[index(i, 0)] = null;
            createBlock(i, 0);
            board[index(i, Row-1)] = null;
            createBlock(i, Row-1);
        }

    }
}

function createBlock(column, row) {
    if (component == null)
        component = Qt.createComponent("Pole.qml");

    // Note that if Block.qml was not a local file, component.status would be
    // Loading and we should wait for the component's statusChanged() signal to
    // know when the file is downloaded and ready before calling createObject().
   // if (component.status == Component.Ready) {
        var dynamicObject = component.createObject(root);
        if (dynamicObject == null) {
            console.log("error creating block");
            console.log(component.errorString());
            return false;
        }
        dynamicObject.x = column * blockSize + 175;
        dynamicObject.y = row * blockSize + 175;
        dynamicObject.width = blockSize;
        dynamicObject.height = blockSize;
        board[index(column, row)] = dynamicObject;
    //} else {
//        console.log("error loading block component");
//        console.log(component.errorString());
//        return false;
   // }
    return true;
}
