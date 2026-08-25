#pragma once
#include "../../unitysdk.h"

namespace YYProject::XXHash { class XXHash64; }

#define YYPROJECT_XXHASH_XXHASH64_.CCTOR_OFFSET UNITYSDK_OFFSET(0xDE1E40)
#define YYPROJECT_XXHASH_XXHASH64_CREATE_OFFSET UNITYSDK_OFFSET(0xDE2090)
#define YYPROJECT_XXHASH_XXHASH64_CREATE_OFFSET UNITYSDK_OFFSET(0xDE2140)
#define YYPROJECT_XXHASH_XXHASH64_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE2100)
#define YYPROJECT_XXHASH_XXHASH64_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE21C0)
#define YYPROJECT_XXHASH_XXHASH64_GET_HASHUINT64_OFFSET UNITYSDK_OFFSET(0xDE2200)
#define YYPROJECT_XXHASH_XXHASH64_GET_SEED_OFFSET UNITYSDK_OFFSET(0xDE2270)
#define YYPROJECT_XXHASH_XXHASH64_SET_SEED_OFFSET UNITYSDK_OFFSET(0xDE2280)
#define YYPROJECT_XXHASH_XXHASH64_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDE2310)
#define YYPROJECT_XXHASH_XXHASH64_HASHCORE_OFFSET UNITYSDK_OFFSET(0xDE2350)
#define YYPROJECT_XXHASH_XXHASH64_HASHFINAL_OFFSET UNITYSDK_OFFSET(0xDE2700)
#define YYPROJECT_XXHASH_XXHASH64_MERGEROUND64_OFFSET UNITYSDK_OFFSET(0xDE2E10)
#define YYPROJECT_XXHASH_XXHASH64_ROUND64_OFFSET UNITYSDK_OFFSET(0xDE2690)
#define YYPROJECT_XXHASH_XXHASH64_ROTATELEFT64_OFFSET UNITYSDK_OFFSET(0xDE2E00)
#define YYPROJECT_XXHASH_XXHASH64_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDE21A0)

namespace YYProject::XXHash
{
	inline static constexpr unsigned int XXHash64_TypeDefinitionIndex = 10143;

	class XXHash64 : public Il2CppObject
	{
	public:
		::System::UInt64 PRIME64_1; // 0x0
		::System::UInt64 PRIME64_2; // 0x0
		::System::UInt64 PRIME64_3; // 0x0
		::System::UInt64 PRIME64_4; // 0x0
		::System::UInt64 PRIME64_5; // 0x0
		Il2CppObject* FuncGetLittleEndianUInt32; // 0x0
		Il2CppObject* FuncGetLittleEndianUInt64; // 0x8
		Il2CppObject* FuncGetFinalHashUInt64; // 0x10
		::System::UInt64 _Seed64; // 0x28
		::System::UInt64 _ACC64_1; // 0x30
		::System::UInt64 _ACC64_2; // 0x38
		::System::UInt64 _ACC64_3; // 0x40
		::System::UInt64 _ACC64_4; // 0x48
		::System::UInt64 _Hash64; // 0x50
		::System::Int32 _RemainingLength; // 0x58
		::System::Int64 _TotalLength; // 0x60
		::System::Int32 _CurrentIndex; // 0x68
		::Il2CppArray<::System::Object*>* _CurrentArray; // 0x70

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH64_.CCTOR_OFFSET))(nullptr);
		}

		::YYProject::XXHash::XXHash64* Create()
		{
			return ((::YYProject::XXHash::XXHash64*(*)(::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH64_CREATE_OFFSET))(nullptr);
		}

		::YYProject::XXHash::XXHash64* Create(::System::String* str)
		{
			return ((::YYProject::XXHash::XXHash64*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH64_CREATE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH64_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::UInt64 get_HashUInt64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH64_GET_HASHUINT64_OFFSET))(nullptr);
		}

		::System::UInt64 get_Seed()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH64_GET_SEED_OFFSET))(nullptr);
		}

		::System::Void set_Seed(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH64_SET_SEED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH64_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void HashCore(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH64_HASHCORE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::Il2CppArray<::System::Object*>* HashFinal()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH64_HASHFINAL_OFFSET))(nullptr);
		}

		::System::UInt64 MergeRound64(::System::UInt64 arg, ::System::UInt64 arg2)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH64_MERGEROUND64_OFFSET))(arg, arg2, nullptr);
		}

		::System::UInt64 Round64(::System::UInt64 arg, ::System::UInt64 arg2)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH64_ROUND64_OFFSET))(arg, arg2, nullptr);
		}

		::System::UInt64 RotateLeft64(::System::UInt64 arg, ::System::Int32 arg2)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH64_ROTATELEFT64_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + YYPROJECT_XXHASH_XXHASH64_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};
}

