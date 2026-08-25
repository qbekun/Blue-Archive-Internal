#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Event; }

#define UNITYENGINE_UIELEMENTS_REPAINTDATA_GET_CURRENTOFFSET_OFFSET UNITYSDK_OFFSET(0xA31FE70)
#define UNITYENGINE_UIELEMENTS_REPAINTDATA_GET_CURRENTWORLDCLIP_OFFSET UNITYSDK_OFFSET(0xA31FEA0)
#define UNITYENGINE_UIELEMENTS_REPAINTDATA_GET_REPAINTEVENT_OFFSET UNITYSDK_OFFSET(0xA31FEB0)
#define UNITYENGINE_UIELEMENTS_REPAINTDATA_SET_REPAINTEVENT_OFFSET UNITYSDK_OFFSET(0xA31FEC0)
#define UNITYENGINE_UIELEMENTS_REPAINTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA31FED0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int RepaintData_TypeDefinitionIndex = 30131;

	class RepaintData : public Il2CppObject
	{
	public:
		::UnityEngine::Matrix4x4* _currentOffset_k__BackingField; // 0x10
		::UnityEngine::Vector2* _mousePosition_k__BackingField; // 0x50
		::UnityEngine::Rect* _currentWorldClip_k__BackingField; // 0x58
		::UnityEngine::Event* _repaintEvent_k__BackingField; // 0x68

		::UnityEngine::Matrix4x4* get_currentOffset()
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REPAINTDATA_GET_CURRENTOFFSET_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* get_currentWorldClip()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REPAINTDATA_GET_CURRENTWORLDCLIP_OFFSET))(nullptr);
		}

		::UnityEngine::Event* get_repaintEvent()
		{
			return (return (::UnityEngine::Event*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REPAINTDATA_GET_REPAINTEVENT_OFFSET))(nullptr);
		}

		::System::Void set_repaintEvent(::UnityEngine::Event* arg)
		{
			((::System::Void(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REPAINTDATA_SET_REPAINTEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REPAINTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

