#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }

#define UITOOLTIPBASE_COSETDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITOOLTIPBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x275E2C0)
#define UITOOLTIPBASE_REFRESHPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int UITooltipBase_TypeDefinitionIndex = 7282;

	class UITooltipBase : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* CoSetData(::System::Object* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector2* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Object*, ::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE_COSETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UITOOLTIPBASE_REFRESHPOSITION_OFFSET))(arg, arg2, nullptr);
		}

	};

