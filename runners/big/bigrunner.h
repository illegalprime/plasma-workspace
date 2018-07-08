/*
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU Library General Public License version 2 as
 *   published by the Free Software Foundation
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details
 *
 *   You should have received a copy of the GNU Library General Public
 *   License along with this program; if not, write to the
 *   Free Software Foundation, Inc.,
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef BIGRUNNER_H
#define BIGRUNNER_H

#include <krunner/abstractrunner.h>

/**
 * This class displays text in really large font, to be able to show it
 * to someone across the room.
 */
class BigRunner : public Plasma::AbstractRunner
{
    Q_OBJECT

    public:
        BigRunner(QObject *parent, const QVariantList &args);
        ~BigRunner() override;

        void match(Plasma::RunnerContext &context) override;
        void run(const Plasma::RunnerContext &context, const Plasma::QueryMatch &action) override;
        QList<QAction *> actionsForMatch(const Plasma::QueryMatch &match) override;

    private:
        bool m_enabled;
};


#endif
