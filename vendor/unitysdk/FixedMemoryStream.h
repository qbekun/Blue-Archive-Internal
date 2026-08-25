#pragma once
#include "unitysdk.h"

#define FIXEDMEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9814460)
#define FIXEDMEMORYSTREAM_CHECKOVERFLOW_OFFSET UNITYSDK_OFFSET(0x9814890)
#define FIXEDMEMORYSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x98149B0)
#define FIXEDMEMORYSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x98149E0)

	inline static constexpr unsigned int FixedMemoryStream_TypeDefinitionIndex = 36655;

	class FixedMemoryStream : public Il2CppObject
	{
	public:
		::System::Int64 maxSize; // 0x50

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDMEMORYSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void CheckOverflow(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDMEMORYSTREAM_CHECKOVERFLOW_OFFSET))(arg, nullptr);
		}

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDMEMORYSTREAM_WRITEBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDMEMORYSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

