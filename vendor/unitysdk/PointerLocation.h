#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class IPanel; }

#define POINTERLOCATION_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA3E5810)
#define POINTERLOCATION_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xA3E5820)
#define POINTERLOCATION_GET_PANEL_OFFSET UNITYSDK_OFFSET(0xA3E5830)
#define POINTERLOCATION_SET_PANEL_OFFSET UNITYSDK_OFFSET(0xA3E5840)
#define POINTERLOCATION_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0xA3E5850)
#define POINTERLOCATION_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0xA3E5860)
#define POINTERLOCATION_SETLOCATION_OFFSET UNITYSDK_OFFSET(0xA3E5160)

	inline static constexpr unsigned int PointerLocation_TypeDefinitionIndex = 30523;

	class PointerLocation : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* _Position_k__BackingField; // 0x10
		::UnityEngine::UIElements::IPanel* _Panel_k__BackingField; // 0x18
		LocationFlag* _Flags_k__BackingField; // 0x20

		::UnityEngine::Vector2* get_Position()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + POINTERLOCATION_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + POINTERLOCATION_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::IPanel* get_Panel()
		{
			return (return (::UnityEngine::UIElements::IPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + POINTERLOCATION_GET_PANEL_OFFSET))(nullptr);
		}

		::System::Void set_Panel(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + POINTERLOCATION_SET_PANEL_OFFSET))(arg, nullptr);
		}

		LocationFlag* get_Flags()
		{
			return (return (LocationFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + POINTERLOCATION_GET_FLAGS_OFFSET))(nullptr);
		}

		::System::Void set_Flags(LocationFlag* arg)
		{
			((::System::Void(*)(LocationFlag*, ::PVOID))((::PBYTE)hIl2Cpp + POINTERLOCATION_SET_FLAGS_OFFSET))(arg, nullptr);
		}

		::System::Void SetLocation(::UnityEngine::Vector2* arg, ::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + POINTERLOCATION_SETLOCATION_OFFSET))(arg, arg, nullptr);
		}

	};

