#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class IBitArray; }
namespace UnityEngine::Rendering { class BitArray32; }

#define UNITYENGINE_RENDERING_BITARRAY32_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x9FCE090)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x9FCE0A0)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x9FCE0B0)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_HUMANIZEDVERSION_OFFSET UNITYSDK_OFFSET(0x9FCE0C0)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x9FCE110)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9FCE250)
#define UNITYENGINE_RENDERING_BITARRAY32_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9FCE270)
#define UNITYENGINE_RENDERING_BITARRAY32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FCE2B0)
#define UNITYENGINE_RENDERING_BITARRAY32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FCE2C0)
#define UNITYENGINE_RENDERING_BITARRAY32_BITAND_OFFSET UNITYSDK_OFFSET(0x9FCE350)
#define UNITYENGINE_RENDERING_BITARRAY32_BITOR_OFFSET UNITYSDK_OFFSET(0x9FCE3E0)
#define UNITYENGINE_RENDERING_BITARRAY32_BITNOT_OFFSET UNITYSDK_OFFSET(0x9FCE470)
#define UNITYENGINE_RENDERING_BITARRAY32_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x9FCE4C0)
#define UNITYENGINE_RENDERING_BITARRAY32_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x9FCE460)
#define UNITYENGINE_RENDERING_BITARRAY32_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x9FCE3D0)
#define UNITYENGINE_RENDERING_BITARRAY32_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9FCE4D0)
#define UNITYENGINE_RENDERING_BITARRAY32_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9FCE4E0)
#define UNITYENGINE_RENDERING_BITARRAY32_EQUALS_OFFSET UNITYSDK_OFFSET(0x9FCE4F0)
#define UNITYENGINE_RENDERING_BITARRAY32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FCE560)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArray32_TypeDefinitionIndex = 34046;

	class BitArray32 : public Il2CppObject
	{
	public:
		::System::UInt32 data; // 0x10

		::System::UInt32 get_capacity()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Boolean get_allFalse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GET_ALLFALSE_OFFSET))(nullptr);
		}

		::System::Boolean get_allTrue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GET_ALLTRUE_OFFSET))(nullptr);
		}

		::System::String* get_humanizedVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GET_HUMANIZEDVERSION_OFFSET))(nullptr);
		}

		::System::String* get_humanizedData()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GET_HUMANIZEDDATA_OFFSET))(nullptr);
		}

		::System::Boolean get_Item(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::UInt32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* arg)
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::UnityEngine::Rendering::IBitArray*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_BITAND_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* arg)
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::UnityEngine::Rendering::IBitArray*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_BITOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_BITNOT_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::BitArray32* op_OnesComplement(::UnityEngine::Rendering::BitArray32* arg)
		{
			return (return (::UnityEngine::Rendering::BitArray32*(*)(::UnityEngine::Rendering::BitArray32*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_OP_ONESCOMPLEMENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::BitArray32* op_BitwiseOr(::UnityEngine::Rendering::BitArray32* arg, ::UnityEngine::Rendering::BitArray32* arg)
		{
			return (return (::UnityEngine::Rendering::BitArray32*(*)(::UnityEngine::Rendering::BitArray32*, ::UnityEngine::Rendering::BitArray32*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_OP_BITWISEOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::BitArray32* op_BitwiseAnd(::UnityEngine::Rendering::BitArray32* arg, ::UnityEngine::Rendering::BitArray32* arg)
		{
			return (return (::UnityEngine::Rendering::BitArray32*(*)(::UnityEngine::Rendering::BitArray32*, ::UnityEngine::Rendering::BitArray32*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_OP_BITWISEAND_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Rendering::BitArray32* arg, ::UnityEngine::Rendering::BitArray32* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::BitArray32*, ::UnityEngine::Rendering::BitArray32*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Rendering::BitArray32* arg, ::UnityEngine::Rendering::BitArray32* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::BitArray32*, ::UnityEngine::Rendering::BitArray32*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

