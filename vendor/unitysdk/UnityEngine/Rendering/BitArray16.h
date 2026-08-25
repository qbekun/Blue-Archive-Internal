#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class BitArray16; }
namespace UnityEngine::Rendering { class IBitArray; }

#define UNITYENGINE_RENDERING_BITARRAY16_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x9FCDBE0)
#define UNITYENGINE_RENDERING_BITARRAY16_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x9FCDBF0)
#define UNITYENGINE_RENDERING_BITARRAY16_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x9FCDC00)
#define UNITYENGINE_RENDERING_BITARRAY16_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x9FCDC10)
#define UNITYENGINE_RENDERING_BITARRAY16_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9FCDD50)
#define UNITYENGINE_RENDERING_BITARRAY16_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9FCDD70)
#define UNITYENGINE_RENDERING_BITARRAY16_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FCDDD0)
#define UNITYENGINE_RENDERING_BITARRAY16_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FCDDE0)
#define UNITYENGINE_RENDERING_BITARRAY16_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x9FCDE60)
#define UNITYENGINE_RENDERING_BITARRAY16_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x9FCDE70)
#define UNITYENGINE_RENDERING_BITARRAY16_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x9FCDE80)
#define UNITYENGINE_RENDERING_BITARRAY16_BITAND_OFFSET UNITYSDK_OFFSET(0x9FCDE90)
#define UNITYENGINE_RENDERING_BITARRAY16_BITOR_OFFSET UNITYSDK_OFFSET(0x9FCDF10)
#define UNITYENGINE_RENDERING_BITARRAY16_BITNOT_OFFSET UNITYSDK_OFFSET(0x9FCDF90)
#define UNITYENGINE_RENDERING_BITARRAY16_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9FCDFE0)
#define UNITYENGINE_RENDERING_BITARRAY16_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9FCDFF0)
#define UNITYENGINE_RENDERING_BITARRAY16_EQUALS_OFFSET UNITYSDK_OFFSET(0x9FCE000)
#define UNITYENGINE_RENDERING_BITARRAY16_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FCE070)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArray16_TypeDefinitionIndex = 34045;

	class BitArray16 : public Il2CppObject
	{
	public:
		::System::UInt16 data; // 0x10

		::System::UInt32 get_capacity()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Boolean get_allFalse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_GET_ALLFALSE_OFFSET))(nullptr);
		}

		::System::Boolean get_allTrue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_GET_ALLTRUE_OFFSET))(nullptr);
		}

		::System::String* get_humanizedData()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_GET_HUMANIZEDDATA_OFFSET))(nullptr);
		}

		::System::Boolean get_Item(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::UInt32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::UInt16 arg)
		{
			((::System::Void(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::BitArray16* op_OnesComplement(::UnityEngine::Rendering::BitArray16* arg)
		{
			return (return (::UnityEngine::Rendering::BitArray16*(*)(::UnityEngine::Rendering::BitArray16*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_OP_ONESCOMPLEMENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::BitArray16* op_BitwiseOr(::UnityEngine::Rendering::BitArray16* arg, ::UnityEngine::Rendering::BitArray16* arg)
		{
			return (return (::UnityEngine::Rendering::BitArray16*(*)(::UnityEngine::Rendering::BitArray16*, ::UnityEngine::Rendering::BitArray16*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_OP_BITWISEOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::BitArray16* op_BitwiseAnd(::UnityEngine::Rendering::BitArray16* arg, ::UnityEngine::Rendering::BitArray16* arg)
		{
			return (return (::UnityEngine::Rendering::BitArray16*(*)(::UnityEngine::Rendering::BitArray16*, ::UnityEngine::Rendering::BitArray16*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_OP_BITWISEAND_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* arg)
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::UnityEngine::Rendering::IBitArray*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_BITAND_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* arg)
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::UnityEngine::Rendering::IBitArray*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_BITOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_BITNOT_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Rendering::BitArray16* arg, ::UnityEngine::Rendering::BitArray16* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::BitArray16*, ::UnityEngine::Rendering::BitArray16*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Rendering::BitArray16* arg, ::UnityEngine::Rendering::BitArray16* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::BitArray16*, ::UnityEngine::Rendering::BitArray16*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

