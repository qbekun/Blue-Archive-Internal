#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_ANIMATIONS_RIGGING_IANIMATIONJOBDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_IANIMATIONJOBDATA_SETDEFAULTVALUES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int IAnimationJobData_TypeDefinitionIndex = 37150;

	class IAnimationJobData : public Il2CppObject
	{
	public:
		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IANIMATIONJOBDATA_ISVALID_OFFSET))(nullptr);
		}

		::System::Void SetDefaultValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IANIMATIONJOBDATA_SETDEFAULTVALUES_OFFSET))(nullptr);
		}

	};
}

