#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

#define HANDCARDPOSITION_SET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x26EF630)
#define HANDCARDPOSITION_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x26EF640)
#define HANDCARDPOSITION_GET_PENDING_OFFSET UNITYSDK_OFFSET(0x26EF660)
#define HANDCARDPOSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x26EF5F0)
#define HANDCARDPOSITION_SET_PENDING_OFFSET UNITYSDK_OFFSET(0x26EF680)

	inline static constexpr unsigned int HandCardPosition_TypeDefinitionIndex = 413;

	class HandCardPosition : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* _Origin_k__BackingField; // 0x10
		::UnityEngine::Vector3* _Pending_k__BackingField; // 0x1C

		::System::Void set_Origin(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + HANDCARDPOSITION_SET_ORIGIN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_Origin()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANDCARDPOSITION_GET_ORIGIN_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_Pending()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANDCARDPOSITION_GET_PENDING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + HANDCARDPOSITION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Pending(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + HANDCARDPOSITION_SET_PENDING_OFFSET))(arg, nullptr);
		}

	};

