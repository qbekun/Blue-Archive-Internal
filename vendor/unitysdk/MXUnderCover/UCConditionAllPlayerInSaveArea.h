#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define MXUNDERCOVER_UCCONDITIONALLPLAYERINSAVEAREA_CHECK_OFFSET UNITYSDK_OFFSET(0xD9BB40)
#define MXUNDERCOVER_UCCONDITIONALLPLAYERINSAVEAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9BDF0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCConditionAllPlayerInSaveArea_TypeDefinitionIndex = 9820;

	class UCConditionAllPlayerInSaveArea : public Il2CppObject
	{
	public:
		::System::Boolean Check(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITIONALLPLAYERINSAVEAREA_CHECK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITIONALLPLAYERINSAVEAREA_.CTOR_OFFSET))(nullptr);
		}

	};
}

