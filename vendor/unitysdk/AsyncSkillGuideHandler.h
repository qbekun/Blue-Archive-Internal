#pragma once
#include "unitysdk.h"

namespace MX::Visual::Battles::SkillRange { class SkillGuide; }

#define ASYNCSKILLGUIDEHANDLER_GET_NEEDDESTROY_OFFSET UNITYSDK_OFFSET(0x1D9EDE0)
#define ASYNCSKILLGUIDEHANDLER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1D9EDF0)
#define ASYNCSKILLGUIDEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EEA0)
#define ASYNCSKILLGUIDEHANDLER_SET_NEEDDESTROY_OFFSET UNITYSDK_OFFSET(0x1D9EEB0)

	inline static constexpr unsigned int AsyncSkillGuideHandler_TypeDefinitionIndex = 20378;

	class AsyncSkillGuideHandler : public Il2CppObject
	{
	public:
		::System::Boolean _NeedDestroy_k__BackingField; // 0x10
		::MX::Visual::Battles::SkillRange::SkillGuide* Result; // 0x18
		Il2CppObject* OnComplete; // 0x20

		::System::Boolean get_NeedDestroy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASYNCSKILLGUIDEHANDLER_GET_NEEDDESTROY_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASYNCSKILLGUIDEHANDLER_RELEASE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASYNCSKILLGUIDEHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_NeedDestroy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASYNCSKILLGUIDEHANDLER_SET_NEEDDESTROY_OFFSET))(arg, nullptr);
		}

	};

