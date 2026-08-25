#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MXUnderCover { class UCEntity; }
namespace MXUnderCover { class UCSectionSetting; }

#define ENTERSECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xD980D0)
#define ENTERSECTION_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD980E0)
#define ENTERSECTION__CO_INTERNALINVOKE_B__3_0_OFFSET UNITYSDK_OFFSET(0xD98190)
#define ENTERSECTION_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD981C0)

	inline static constexpr unsigned int EnterSection_TypeDefinitionIndex = 9773;

	class EnterSection : public Il2CppObject
	{
	public:
		::System::String* DesignLevel; // 0x28
		::UnityEngine::GameObject* EnterPoint; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTERSECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + ENTERSECTION_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Boolean _co_InternalInvoke_b__3_0(::MXUnderCover::UCSectionSetting* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCSectionSetting*, ::PVOID))((::PBYTE)hIl2Cpp + ENTERSECTION__CO_INTERNALINVOKE_B__3_0_OFFSET))(arg, nullptr);
		}

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTERSECTION_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

	};

