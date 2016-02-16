// 16/02/2016

#ifndef WORD_H
#define WORD_H


#include <QString>
#include <QByteArray>

class Word
{
public:
    Word();
    Word(const QString& english, const QString& polish);

    QString getEnglish() const;
    QString getPolish() const;
    QString getMeaning() const;
    QString getSampleSentence() const;
    QByteArray getSound() const;

    void setEnglish(const QString& word);
    void setPolish(const QString& word);
    void setMeaning(const QString& meaning);
    void setSampleSentence(const QString& sentence);
    void setSound(QByteArray sound);

private:
    QString m_eng;
    QString m_pl;
    QString m_meaning;
    QString m_sample;
    QByteArray m_sound;
};

#endif // WORD_H
