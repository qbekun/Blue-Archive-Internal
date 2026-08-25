#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }

#define WIDGETFLOATER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x205E3C0)
#define WIDGETFLOATER_GET_VIEWZ_OFFSET UNITYSDK_OFFSET(0x205E590)
#define WIDGETFLOATER_.CTOR_OFFSET UNITYSDK_OFFSET(0x205E770)

	inline static constexpr unsigned int WidgetFloater_TypeDefinitionIndex = 3381;

	class WidgetFloater : public Il2CppObject
	{
	public:
		::System::Void Initialize(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector3* arg3)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETFLOATER_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single get_ViewZ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETFLOATER_GET_VIEWZ_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETFLOATER_.CTOR_OFFSET))(nullptr);
		}

	};

