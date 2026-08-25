#pragma once
#include "unitysdk.h"

namespace Cinemachine { class CinemachineBlendDefinition; }
class UpdateMethod;

	inline static constexpr unsigned int CinemachineBackup_TypeDefinitionIndex = 9929;

	class CinemachineBackup : public Il2CppObject
	{
	public:
		::Cinemachine::CinemachineBlendDefinition* defaultBlend; // 0x10
		UpdateMethod* updateMethod; // 0x20

	};

