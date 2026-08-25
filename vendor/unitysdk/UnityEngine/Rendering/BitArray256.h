#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class BitArray256; }
namespace UnityEngine::Rendering { class IBitArray; }

#define UNITYENGINE_RENDERING_BITARRAY256_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x9FCF100)
#define UNITYENGINE_RENDERING_BITARRAY256_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x9FCF110)
#define UNITYENGINE_RENDERING_BITARRAY256_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x9FCF140)
#define UNITYENGINE_RENDERING_BITARRAY256_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x9FCF170)
#define UNITYENGINE_RENDERING_BITARRAY256_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9FCF460)
#define UNITYENGINE_RENDERING_BITARRAY256_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9FCF520)
#define UNITYENGINE_RENDERING_BITARRAY256_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FCF670)
#define UNITYENGINE_RENDERING_BITARRAY256_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FCF690)
#define UNITYENGINE_RENDERING_BITARRAY256_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x9FCF7A0)
#define UNITYENGINE_RENDERING_BITARRAY256_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x9FCF7D0)
#define UNITYENGINE_RENDERING_BITARRAY256_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x9FCF800)
#define UNITYENGINE_RENDERING_BITARRAY256_BITAND_OFFSET UNITYSDK_OFFSET(0x9FCF830)
#define UNITYENGINE_RENDERING_BITARRAY256_BITOR_OFFSET UNITYSDK_OFFSET(0x9FCF8E0)
#define UNITYENGINE_RENDERING_BITARRAY256_BITNOT_OFFSET UNITYSDK_OFFSET(0x9FCF990)
#define UNITYENGINE_RENDERING_BITARRAY256_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9FCF9F0)
#define UNITYENGINE_RENDERING_BITARRAY256_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9FCFA20)
#define UNITYENGINE_RENDERING_BITARRAY256_EQUALS_OFFSET UNITYSDK_OFFSET(0x9FCFA50)
#define UNITYENGINE_RENDERING_BITARRAY256_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FCFB80)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArray256_TypeDefinitionIndex = 34049;

	class BitArray256 : public Il2CppObject
	{
	public:
		::System::UInt64 data1; // 0x10
		::System::UInt64 data2; // 0x18
		::System::UInt64 data3; // 0x20
		::System::UInt64 data4; // 0x28

		::System::UInt32 get_capacity()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Boolean get_allFalse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_GET_ALLFALSE_OFFSET))(nullptr);
		}

		::System::Boolean get_allTrue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_GET_ALLTRUE_OFFSET))(nullptr);
		}

		::System::String* get_humanizedData()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_GET_HUMANIZEDDATA_OFFSET))(nullptr);
		}

		::System::Boolean get_Item(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::UInt32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::UInt64 arg, ::System::UInt64 arg, ::System::UInt64 arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::BitArray256* op_OnesComplement(::UnityEngine::Rendering::BitArray256* arg)
		{
			return (return (::UnityEngine::Rendering::BitArray256*(*)(::UnityEngine::Rendering::BitArray256*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_OP_ONESCOMPLEMENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::BitArray256* op_BitwiseOr(::UnityEngine::Rendering::BitArray256* arg, ::UnityEngine::Rendering::BitArray256* arg)
		{
			return (return (::UnityEngine::Rendering::BitArray256*(*)(::UnityEngine::Rendering::BitArray256*, ::UnityEngine::Rendering::BitArray256*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_OP_BITWISEOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::BitArray256* op_BitwiseAnd(::UnityEngine::Rendering::BitArray256* arg, ::UnityEngine::Rendering::BitArray256* arg)
		{
			return (return (::UnityEngine::Rendering::BitArray256*(*)(::UnityEngine::Rendering::BitArray256*, ::UnityEngine::Rendering::BitArray256*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_OP_BITWISEAND_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* arg)
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::UnityEngine::Rendering::IBitArray*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_BITAND_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* arg)
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::UnityEngine::Rendering::IBitArray*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_BITOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_BITNOT_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Rendering::BitArray256* arg, ::UnityEngine::Rendering::BitArray256* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::BitArray256*, ::UnityEngine::Rendering::BitArray256*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Rendering::BitArray256* arg, ::UnityEngine::Rendering::BitArray256* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::BitArray256*, ::UnityEngine::Rendering::BitArray256*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

