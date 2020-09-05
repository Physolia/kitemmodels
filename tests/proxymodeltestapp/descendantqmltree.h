/*
    This file is part of the proxy model test suite.

    SPDX-FileCopyrightText: 2015 Stephen Kelly <steveire@gmail.com>

    SPDX-License-Identifier: LGPL-2.1-or-later
*/

#ifndef DESCENDANTQMLTREE_H
#define DESCENDANTQMLTREE_H

#include <QWidget>

class QTreeView;

class DynamicTreeModel;

class DescendantQmlTreeWidget : public QWidget
{
public:
    DescendantQmlTreeWidget(QWidget *parent = nullptr);

private:
    DynamicTreeModel *m_rootModel;
};

#endif
