#pragma once
#include "ECSConfig.h"

namespace Reality
{
	struct BungeeComponent
	{
		BungeeComponent(float _springConstant = 1.0f,
			float _restLength = 0.5f,
			ECSEntity _connectedEntity = ECSEntity())
			: springConstant(_springConstant),
			restLength(_restLength),
			connectedEntity(_connectedEntity)
		{

		}
		float springConstant;
		float restLength;
		ECSEntity connectedEntity;
	};
}
