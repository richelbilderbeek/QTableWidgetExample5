#include "qnumberedcolumn.h"

#include <QTableWidgetItem>
#include <QHeaderView>

QNumberedColumn::QNumberedColumn(
  const QVector<QString>& text,
  QWidget *parent
) : QTableWidget(text.size(), 1, parent)
{
  this->setTextElideMode(Qt::ElideNone);
  this->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
  this->horizontalHeader()->setStretchLastSection(true);
  this->horizontalHeader()->setSizeAdjustPolicy(QHeaderView::AdjustToContents);
  this->horizontalHeader()->setHidden(true);
  const int n_lines{text.size()};
  for (int i = 0; i != n_lines; ++i)
  {
    QTableWidgetItem * const item = new QTableWidgetItem(text[i]);
    this->setItem(i, 0, item);
  }
  connect(
   this->horizontalHeader(),
    SIGNAL(sectionResized(int, int, int)),
    this,
    SLOT(resizeRowsToContents())
  );
}

QNumberedColumn::~QNumberedColumn()
{

}
