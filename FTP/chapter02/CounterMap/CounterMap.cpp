// ======================================================================
//  Counter.cpp
// ======================================================================
//                   This file is a part of the book 
//             "Qt 5.10 Professional programming with C++"
//                       http://qt-book.com
// ======================================================================
//  Copyright (c) 2017 by Max Schlee
// ======================================================================

#include "CounterMap.h"

// ----------------------------------------------------------------------
Counter::Counter() : QObject(), m_nValue(0){}

// ----------------------------------------------------------------------
void Counter::slotInc() {
    emit counterChanged(++m_nValue);

    if (m_nValue == 5) {
        emit goodbye();
    }
}

void Counter::slotInc_min() {
    emit counterChanged(--m_nValue);

    if (m_nValue == 5) {
        emit goodbye();
    }
}
