#include <QtTest/QtTest>
#include <QAbstractItemModelTester>
#include "mainwindow.h"

class TestModelRemoveRows: public QObject
{
    Q_OBJECT
private slots:
    void remove();
};

void TestModelRemoveRows::remove()
{
   Q_INIT_RESOURCE(editabletreemodel);

   MainWindow window;
   QAbstractItemModel* pModel = window.view->model();
   QAbstractItemModelTester modelTester(pModel);

   QModelIndex indexGettingStarted = pModel->index(0, 0);
   QModelIndex indexLaunchingDesigner = pModel->index(0, 0, indexGettingStarted);

   pModel->removeRow(indexLaunchingDesigner.row(), indexLaunchingDesigner.parent());
}


QTEST_MAIN(TestModelRemoveRows)
#include "removeRows.moc"
