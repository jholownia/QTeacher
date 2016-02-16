#include "word.h"

Word::Word()
{

}

Word::Word(const QString& english, const QString& polish) :
    m_eng(english),
    m_pl(polish)
{

}

QString Word::getEnglish() const
{
    return m_eng;
}

QString Word::getPolish() const
{
    return m_pl;
}

QString Word::getMeaning() const
{
    return m_meaning;
}

QString Word::getSampleSentence() const
{
    return m_sample;
}

QByteArray Word::getSound() const
{
    return m_sound;
}

void Word::setEnglish(const QString &word)
{
    m_eng = word;
}

void Word::setPolish(const QString &word)
{
    m_pl = word;
}

void Word::setMeaning(const QString &meaning)
{
    m_meaning = meaning;
}

void Word::setSampleSentence(const QString &sentence)
{
    m_sample = sentence;
}

void Word::setSound(QByteArray sound)
{
    m_sound = sound;
}
