#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class SortingLayerRange; }

#define UNITYENGINE_RENDERING_SORTINGLAYERRANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2644C0)
#define UNITYENGINE_RENDERING_SORTINGLAYERRANGE_GET_LOWERBOUND_OFFSET UNITYSDK_OFFSET(0xA2644D0)
#define UNITYENGINE_RENDERING_SORTINGLAYERRANGE_GET_UPPERBOUND_OFFSET UNITYSDK_OFFSET(0xA2644E0)
#define UNITYENGINE_RENDERING_SORTINGLAYERRANGE_GET_ALL_OFFSET UNITYSDK_OFFSET(0xA2644F0)
#define UNITYENGINE_RENDERING_SORTINGLAYERRANGE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA264500)
#define UNITYENGINE_RENDERING_SORTINGLAYERRANGE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA264530)
#define UNITYENGINE_RENDERING_SORTINGLAYERRANGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2645C0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SortingLayerRange_TypeDefinitionIndex = 31574;

	class SortingLayerRange : public Il2CppObject
	{
	public:
		::System::Int16 m_LowerBound; // 0x10
		::System::Int16 m_UpperBound; // 0x12

		::System::Void .ctor(::System::Int16 arg, ::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGLAYERRANGE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int16 get_lowerBound()
		{
			return (return (::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGLAYERRANGE_GET_LOWERBOUND_OFFSET))(nullptr);
		}

		::System::Int16 get_upperBound()
		{
			return (return (::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGLAYERRANGE_GET_UPPERBOUND_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::SortingLayerRange* get_all()
		{
			return (return (::UnityEngine::Rendering::SortingLayerRange*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGLAYERRANGE_GET_ALL_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::SortingLayerRange* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::SortingLayerRange*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGLAYERRANGE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGLAYERRANGE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGLAYERRANGE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

