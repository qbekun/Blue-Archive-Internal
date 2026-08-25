#pragma once
#include "../../unitysdk.h"

namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine { class RectInt&; }

#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_GET_MAXATLASSIZE_OFFSET UNITYSDK_OFFSET(0xA404D50)
#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_GET_MAXIMAGEWIDTH_OFFSET UNITYSDK_OFFSET(0xA404D60)
#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_GET_MAXIMAGEHEIGHT_OFFSET UNITYSDK_OFFSET(0xA404D70)
#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_GET_VIRTUALWIDTH_OFFSET UNITYSDK_OFFSET(0xA404D80)
#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_SET_VIRTUALWIDTH_OFFSET UNITYSDK_OFFSET(0xA404D90)
#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_GET_VIRTUALHEIGHT_OFFSET UNITYSDK_OFFSET(0xA404DA0)
#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_SET_VIRTUALHEIGHT_OFFSET UNITYSDK_OFFSET(0xA404DB0)
#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_GET_PHYSICALWIDTH_OFFSET UNITYSDK_OFFSET(0xA404DC0)
#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_SET_PHYSICALWIDTH_OFFSET UNITYSDK_OFFSET(0xA404DD0)
#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_GET_PHYSICALHEIGHT_OFFSET UNITYSDK_OFFSET(0xA404DE0)
#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_SET_PHYSICALHEIGHT_OFFSET UNITYSDK_OFFSET(0xA404DF0)
#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA404E00)
#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA404E10)
#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA404E20)
#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA404E80)
#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_GETLOG2OFNEXTPOWER_OFFSET UNITYSDK_OFFSET(0xA4051F0)
#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA405340)
#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_TRYALLOCATE_OFFSET UNITYSDK_OFFSET(0xA405720)
#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_TRYPARTITIONAREA_OFFSET UNITYSDK_OFFSET(0xA405B10)
#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_BUILDAREAS_OFFSET UNITYSDK_OFFSET(0xA4055E0)
#define UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA406090)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UIRAtlasAllocator_TypeDefinitionIndex = 30572;

	class UIRAtlasAllocator : public Il2CppObject
	{
	public:
		::System::Int32 _maxAtlasSize_k__BackingField; // 0x10
		::System::Int32 _maxImageWidth_k__BackingField; // 0x14
		::System::Int32 _maxImageHeight_k__BackingField; // 0x18
		::System::Int32 _virtualWidth_k__BackingField; // 0x1C
		::System::Int32 _virtualHeight_k__BackingField; // 0x20
		::System::Int32 _physicalWidth_k__BackingField; // 0x24
		::System::Int32 _physicalHeight_k__BackingField; // 0x28
		AreaNode* m_FirstUnpartitionedArea; // 0x30
		::Il2CppArray<::System::Object*>* m_OpenRows; // 0x38
		::System::Int32 m_1SidePadding; // 0x40
		::System::Int32 m_2SidePadding; // 0x44
		::Unity::Profiling::ProfilerMarker* s_MarkerTryAllocate; // 0x0
		::System::Boolean _disposed_k__BackingField; // 0x48

		::System::Int32 get_maxAtlasSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_GET_MAXATLASSIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_maxImageWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_GET_MAXIMAGEWIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_maxImageHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_GET_MAXIMAGEHEIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_virtualWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_GET_VIRTUALWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_virtualWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_SET_VIRTUALWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_virtualHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_GET_VIRTUALHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_virtualHeight(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_SET_VIRTUALHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_physicalWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_GET_PHYSICALWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_physicalWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_SET_PHYSICALWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_physicalHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_GET_PHYSICALHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_physicalHeight(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_SET_PHYSICALHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_disposed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_GET_DISPOSED_OFFSET))(nullptr);
		}

		::System::Void set_disposed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_SET_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetLog2OfNextPower(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_GETLOG2OFNEXTPOWER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryAllocate(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RectInt&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::UnityEngine::RectInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_TRYALLOCATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryPartitionArea(AreaNode* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(AreaNode*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_TRYPARTITIONAREA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void BuildAreas()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_BUILDAREAS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRATLASALLOCATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

