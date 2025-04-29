////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2025 Ripose
//
// This file is part of Memento.
//
// Memento is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 2 of the License.
//
// Memento is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Memento.  If not, see <https://www.gnu.org/licenses/>.
//
////////////////////////////////////////////////////////////////////////////////

#include <QHash>
#include <QString>
#include <QList>

namespace Anki
{
namespace Tokenizer
{

/**
 * Holds the information of a marker.
 */
struct Marker
{
    /* Name of the marker */
    QString marker;

    /* A key value pair of arguments */
    QHash<QString, QString> args;
};

/**
 * Represents a text token.
 */
struct Token
{
    /* Contains all the markers */
    QList<Anki::Tokenizer::Marker> markers;

    /* The raw token */
    QString raw;
};

/**
 * Returns a list of tokens found in the text.
 * @param text The text to parse for tokens.
 * @return A list of tokens found in the text.
 */
[[nodiscard]]
QList<Anki::Tokenizer::Token> tokenize(const QString &text);

}
}
