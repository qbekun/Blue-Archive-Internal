#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class IBitArray; }

#define UNITYENGINE_RENDERING_IBITARRAY_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_IBITARRAY_BITAND_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_IBITARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_IBITARRAY_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_IBITARRAY_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_IBITARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_IBITARRAY_BITOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_IBITARRAY_BITNOT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_IBITARRAY_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int IBitArray_TypeDefinitionIndex = 34043;

	class IBitArray : public Il2CppObject
	{
	public:
		::System::Boolean get_allTrue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_IBITARRAY_GET_ALLTRUE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* arg)
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::UnityEngine::Rendering::IBitArray*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_IBITARRAY_BITAND_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Item(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_IBITARRAY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_allFalse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_IBITARRAY_GET_ALLFALSE_OFFSET))(nullptr);
		}

		::System::String* get_humanizedData()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_IBITARRAY_GET_HUMANIZEDDATA_OFFSET))(nullptr);
		}

		::System::Void set_Item(::System::UInt32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_IBITARRAY_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* arg)
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::UnityEngine::Rendering::IBitArray*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_IBITARRAY_BITOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_IBITARRAY_BITNOT_OFFSET))(nullptr);
		}

		::System::UInt32 get_capacity()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_IBITARRAY_GET_CAPACITY_OFFSET))(nullptr);
		}

	};
}

