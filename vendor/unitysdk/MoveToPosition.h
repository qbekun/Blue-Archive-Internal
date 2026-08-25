#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace MXUnderCover { class UCEntity; }

#define MOVETOPOSITION_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD9A6B0)
#define MOVETOPOSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9A6C0)
#define MOVETOPOSITION_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD9A6D0)

	inline static constexpr unsigned int MoveToPosition_TypeDefinitionIndex = 9798;

	class MoveToPosition : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* destination; // 0x28
		::System::Boolean isWalking; // 0x30

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVETOPOSITION_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVETOPOSITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MOVETOPOSITION_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

	};

