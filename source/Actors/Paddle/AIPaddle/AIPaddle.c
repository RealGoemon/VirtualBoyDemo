/*
 * VUEngine Showcase
 *
 * © Jorge Eremiev <jorgech3@gmail.com> and Christian Radke <c.radke@posteo.de>
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <Body.h>
#include <PongManager.h>

#include "AIPaddle.h"

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' DECLARATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

mutation class AIPaddle;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' PUBLIC METHODS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void AIPaddle::update()
{
	Actor disk = Actor::safeCast(AIPaddle::getRelativeByName(this, DISK_NAME));

	if(!isDeleted(disk))
	{
		fixed_t forceMagnitude = 0;

		fixed_t diskYPosition = Actor::getPosition(disk)->y;

		if(__PIXELS_TO_METERS(2) < __ABS(diskYPosition - this->transformation.position.y))
		{
			if(diskYPosition < this->transformation.position.y)
			{
				forceMagnitude = -__FIXED_MULT(Body::getMass(this->body), Body::getMaximumSpeed(this->body));
			}
			else
			{
				forceMagnitude = __FIXED_MULT(Body::getMass(this->body), Body::getMaximumSpeed(this->body));
			}

			Vector3D force = {0, forceMagnitude, 0};

			AIPaddle::applyForce(this, &force, true);
		}
	}
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
