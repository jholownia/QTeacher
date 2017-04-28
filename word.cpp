#include "word.h"

Word::Word()
    : m_confidence(0)
{

}

Word::Word(const QString &native, const QString &foreign)
    : m_native(native)
    , m_foreign(foreign)
    , m_confidence(0)
{

}

QString Word::getNative() const
{
    return m_native;
}

QString Word::getForeign() const
{
    return m_foreign;
}

int Word::getConfidence() const
{
    return m_confidence;
}

void Word::setNative(const QString &word)
{
    m_native = word;
}

void Word::setForeign(const QString &word)
{
    m_foreign = word;
}

void Word::setConfidence(const int confidence)
{
    m_confidence = confidence;
}
