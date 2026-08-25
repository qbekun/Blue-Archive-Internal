#pragma once
#include "unitysdk.h"

class Direction;
namespace UnityEngine { class Vector2; }

#define UISCROLLBAR_LOCALTOVALUE_OFFSET UNITYSDK_OFFSET(0xA36150)
#define UISCROLLBAR_GET_BARSIZE_OFFSET UNITYSDK_OFFSET(0xA36580)
#define UISCROLLBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA36590)
#define UISCROLLBAR_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0xA36610)
#define UISCROLLBAR_SET_SCROLLVALUE_OFFSET UNITYSDK_OFFSET(0xA369E0)
#define UISCROLLBAR_SET_BARSIZE_OFFSET UNITYSDK_OFFSET(0xA369F0)
#define UISCROLLBAR_GET_SCROLLVALUE_OFFSET UNITYSDK_OFFSET(0xA36BA0)
#define UISCROLLBAR_UPGRADE_OFFSET UNITYSDK_OFFSET(0xA36C90)
#define UISCROLLBAR_ONSTART_OFFSET UNITYSDK_OFFSET(0xA36D00)

	inline static constexpr unsigned int UIScrollBar_TypeDefinitionIndex = 67;

	class UIScrollBar : public Il2CppObject
	{
	public:
		::System::Single mSize; // 0xA0
		::System::Single mScroll; // 0xA4
		Direction* mDir; // 0xA8

		::System::Single LocalToValue(::UnityEngine::Vector2* arg)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UISCROLLBAR_LOCALTOVALUE_OFFSET))(arg, nullptr);
		}

		::System::Single get_barSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLBAR_GET_BARSIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLBAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ForceUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLBAR_FORCEUPDATE_OFFSET))(nullptr);
		}

		::System::Void set_scrollValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UISCROLLBAR_SET_SCROLLVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void set_barSize(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UISCROLLBAR_SET_BARSIZE_OFFSET))(arg, nullptr);
		}

		::System::Single get_scrollValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLBAR_GET_SCROLLVALUE_OFFSET))(nullptr);
		}

		::System::Void Upgrade()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLBAR_UPGRADE_OFFSET))(nullptr);
		}

		::System::Void OnStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCROLLBAR_ONSTART_OFFSET))(nullptr);
		}

	};

