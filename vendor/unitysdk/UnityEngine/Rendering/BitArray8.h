#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class BitArray8; }
namespace UnityEngine::Rendering { class IBitArray; }

#define UNITYENGINE_RENDERING_BITARRAY8_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x9FCD7A0)
#define UNITYENGINE_RENDERING_BITARRAY8_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x9FCD7B0)
#define UNITYENGINE_RENDERING_BITARRAY8_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x9FCD7C0)
#define UNITYENGINE_RENDERING_BITARRAY8_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x9FCD7D0)
#define UNITYENGINE_RENDERING_BITARRAY8_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9FCD8A0)
#define UNITYENGINE_RENDERING_BITARRAY8_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9FCD8C0)
#define UNITYENGINE_RENDERING_BITARRAY8_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FCD920)
#define UNITYENGINE_RENDERING_BITARRAY8_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FCD930)
#define UNITYENGINE_RENDERING_BITARRAY8_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x9FCD9B0)
#define UNITYENGINE_RENDERING_BITARRAY8_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x9FCD9C0)
#define UNITYENGINE_RENDERING_BITARRAY8_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x9FCD9D0)
#define UNITYENGINE_RENDERING_BITARRAY8_BITAND_OFFSET UNITYSDK_OFFSET(0x9FCD9E0)
#define UNITYENGINE_RENDERING_BITARRAY8_BITOR_OFFSET UNITYSDK_OFFSET(0x9FCDA60)
#define UNITYENGINE_RENDERING_BITARRAY8_BITNOT_OFFSET UNITYSDK_OFFSET(0x9FCDAE0)
#define UNITYENGINE_RENDERING_BITARRAY8_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9FCDB30)
#define UNITYENGINE_RENDERING_BITARRAY8_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9FCDB40)
#define UNITYENGINE_RENDERING_BITARRAY8_EQUALS_OFFSET UNITYSDK_OFFSET(0x9FCDB50)
#define UNITYENGINE_RENDERING_BITARRAY8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FCDBC0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArray8_TypeDefinitionIndex = 34044;

	class BitArray8 : public Il2CppObject
	{
	public:
		::System::Byte data; // 0x10

		::System::UInt32 get_capacity()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Boolean get_allFalse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GET_ALLFALSE_OFFSET))(nullptr);
		}

		::System::Boolean get_allTrue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GET_ALLTRUE_OFFSET))(nullptr);
		}

		::System::String* get_humanizedData()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GET_HUMANIZEDDATA_OFFSET))(nullptr);
		}

		::System::Boolean get_Item(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::UInt32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::BitArray8* op_OnesComplement(::UnityEngine::Rendering::BitArray8* arg)
		{
			return (return (::UnityEngine::Rendering::BitArray8*(*)(::UnityEngine::Rendering::BitArray8*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_OP_ONESCOMPLEMENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::BitArray8* op_BitwiseOr(::UnityEngine::Rendering::BitArray8* arg, ::UnityEngine::Rendering::BitArray8* arg)
		{
			return (return (::UnityEngine::Rendering::BitArray8*(*)(::UnityEngine::Rendering::BitArray8*, ::UnityEngine::Rendering::BitArray8*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_OP_BITWISEOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::BitArray8* op_BitwiseAnd(::UnityEngine::Rendering::BitArray8* arg, ::UnityEngine::Rendering::BitArray8* arg)
		{
			return (return (::UnityEngine::Rendering::BitArray8*(*)(::UnityEngine::Rendering::BitArray8*, ::UnityEngine::Rendering::BitArray8*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_OP_BITWISEAND_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* arg)
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::UnityEngine::Rendering::IBitArray*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_BITAND_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* arg)
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::UnityEngine::Rendering::IBitArray*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_BITOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_BITNOT_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Rendering::BitArray8* arg, ::UnityEngine::Rendering::BitArray8* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::BitArray8*, ::UnityEngine::Rendering::BitArray8*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Rendering::BitArray8* arg, ::UnityEngine::Rendering::BitArray8* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::BitArray8*, ::UnityEngine::Rendering::BitArray8*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

