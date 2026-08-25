#pragma once
#include "unitysdk.h"

#define MXSKILLTOOLTIPDESCRIPTION_ONAFTERLAYOUT_OFFSET UNITYSDK_OFFSET(0xC19580)
#define MXSKILLTOOLTIPDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xC19620)

	inline static constexpr unsigned int MXSkillTooltipDescription_TypeDefinitionIndex = 8849;

	class MXSkillTooltipDescription : public Il2CppObject
	{
	public:
		::System::Void OnAfterLayout(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSKILLTOOLTIPDESCRIPTION_ONAFTERLAYOUT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSKILLTOOLTIPDESCRIPTION_.CTOR_OFFSET))(nullptr);
		}

	};

