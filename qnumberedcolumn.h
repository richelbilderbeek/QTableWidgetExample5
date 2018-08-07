#ifndef QNUMBEREDCOLUMN_H
#define QNUMBEREDCOLUMN_H

#include <QTableWidget>

class QNumberedColumn : public QTableWidget
{
  Q_OBJECT

public:
  explicit QNumberedColumn(
    const QVector<QString>& text,
    QWidget *parent = 0
  );
  ~QNumberedColumn();
};

#endif // QNUMBEREDCOLUMN_H
