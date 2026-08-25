#pragma once
#include "../../unitysdk.h"

namespace YYProject::XXHash { class XXHash32; }

#define YYPROJECT_XXHASH_XXHASH32_.CCTOR_OFFSET UNITYSDK_OFFSET(0xDE1330)
#define YYPROJECT_XXHASH_XXHASH32_CREATE_OFFSET UNITYSDK_OFFSET(0xDE1500)
#define YYPROJECT_XXHASH_XXHASH32_CREATE_OFFSET UNITYSDK_OFFSET(0xDE15B0)
#define YYPROJECT_XXHASH_XXHASH32_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE1570)
#define YYPROJECT_XXHASH_XXHASH32_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE1630)
#define YYPROJECT_XXHASH_XXHASH32_GET_HASHUINT32_OFFSET UNITYSDK_OFFSET(0xDE1670)
#define YYPROJECT_XXHASH_XXHASH32_GET_SEED_OFFSET UNITYSDK_OFFSET(0xDE16E0)
#define YYPROJECT_XXHASH_XXHASH32_SET_SEED_OFFSET UNITYSDK_OFFSET(0xDE16F0)
#define YYPROJECT_XXHASH_XXHASH32_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDE1780)
#define YYPROJECT_XXHASH_XXHASH32_HASHCORE_OFFSET UNITYSDK_OFFSET(0xDE17B0)
#define YYPROJECT_XXHASH_XXHASH32_HASHFINAL_OFFSET UNITYSDK_OFFSET(0xDE1AE0)
#define YYPROJECT_XXHASH_XXHASH32_ROUND32_OFFSET UNITYSDK_OFFSET(0xDE1A80)
#define YYPROJECT_XXHASH_XXHASH32_ROTATELEFT32_OFFSET UNITYSDK_OFFSET(0xDE1D10)
#define YYPROJECT_XXHASH_XXHASH32_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDE1610)

namespace YYProject::XXHash
{
	inline static constexpr unsigned int XXHash32_TypeDefinitionIndex = 10141;

	class XXHash32 : public Il2CppObject
	{
	public:
		::System::UInt32 PRIME32_1; // 0x0
		::System::UInt32 PRIME32_2; // 0x0
		::System::UInt32 PRIME32_3; // 0x0
		::System::UInt32 PRIME32_4; // 0x0
		::System::UInt32 PRIME32_5; // 0x0
		Il2CppObject* FuncGetLittleEndianUInt32; // 0x0
		Il2CppObject* FuncGetFinalHashUInt32; // 0x8
		::System::UInt32 _Seed32; // 0x28
		::System::UInt32 _ACC32_1; // 0x2C
		::System::UInt32 _ACC32_2; // 0x30
		::System::UInt32 _ACC32_3; // 0x34
		::System::UInt32 _ACC32_4; // 0x38
		::System::UInt32 _Hash32; // 0x3C
		::System::Int32 _RemainingLength; // 0x40
		::System::Int64 _TotalLength; // 0x48
		::System::Int32 _CurrentIndex; // 0x50
		::Il2CppArray<::System::Object*>* _CurrentArray; // 0x58

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH32_.CCTOR_OFFSET))(nullptr);
		}

		::YYProject::XXHash::XXHash32* Create()
		{
			return ((::YYProject::XXHash::XXHash32*(*)(::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH32_CREATE_OFFSET))(nullptr);
		}

		::YYProject::XXHash::XXHash32* Create(::System::String* str)
		{
			return ((::YYProject::XXHash::XXHash32*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH32_CREATE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH32_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH32_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_HashUInt32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH32_GET_HASHUINT32_OFFSET))(nullptr);
		}

		::System::UInt32 get_Seed()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH32_GET_SEED_OFFSET))(nullptr);
		}

		::System::Void set_Seed(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH32_SET_SEED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH32_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void HashCore(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH32_HASHCORE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::Il2CppArray<::System::Object*>* HashFinal()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH32_HASHFINAL_OFFSET))(nullptr);
		}

		::System::UInt32 Round32(::System::UInt32 arg, ::System::UInt32 arg2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH32_ROUND32_OFFSET))(arg, arg2, nullptr);
		}

		::System::UInt32 RotateLeft32(::System::UInt32 arg, ::System::Int32 arg2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH32_ROTATELEFT32_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH32_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};
}

