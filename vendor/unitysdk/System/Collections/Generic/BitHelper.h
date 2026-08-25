#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_BITHELPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x96C5050)
#define SYSTEM_COLLECTIONS_GENERIC_BITHELPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x96C5080)
#define SYSTEM_COLLECTIONS_GENERIC_BITHELPER_MARKBIT_OFFSET UNITYSDK_OFFSET(0x96C50C0)
#define SYSTEM_COLLECTIONS_GENERIC_BITHELPER_ISMARKED_OFFSET UNITYSDK_OFFSET(0x96C5150)
#define SYSTEM_COLLECTIONS_GENERIC_BITHELPER_TOINTARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x96C51E0)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int BitHelper_TypeDefinitionIndex = 33584;

	class BitHelper : public Il2CppObject
	{
	public:
		::System::Int32 _length; // 0x10
		::System::Object** _arrayPtr; // 0x18
		::Il2CppArray<::System::Object*>* _array; // 0x20
		::System::Boolean _useStackAlloc; // 0x28

		::System::Void .ctor(::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BITHELPER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BITHELPER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MarkBit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BITHELPER_MARKBIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMarked(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BITHELPER_ISMARKED_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToIntArrayLength(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BITHELPER_TOINTARRAYLENGTH_OFFSET))(arg, nullptr);
		}

	};
}

