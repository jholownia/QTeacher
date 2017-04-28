// 16/02/2016

#ifndef WORD_H
#define WORD_H

// test

#include <QString>
#include <QByteArray>

// TODO: use QHash map or 2

class Word
{
public:
    Word();
    Word(const QString& native, const QString& foreign);

    QString getNative() const;
    QString getForeign() const;
    int getConfidence() const;

    void setNative(const QString& word);
    void setForeign(const QString& word);
    void setConfidence(const int confidence);

private:
    QString m_native;
    QString m_foreign;
    int m_confidence;
};

#endif // WORD_H
