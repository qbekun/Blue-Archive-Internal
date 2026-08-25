#pragma once
#include "unitysdk.h"

#define BLOCKRANGE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA055390)
#define BLOCKRANGE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA059610)
#define BLOCKRANGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA059620)
#define BLOCKRANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA059590)
#define BLOCKRANGE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA054EB0)

	inline static constexpr unsigned int BlockRange_TypeDefinitionIndex = 32637;

	class BlockRange : public Il2CppObject
	{
	public:
		::System::Int32 m_Current; // 0x10
		::System::Int32 m_End; // 0x14

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOCKRANGE_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Int32 get_Current()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOCKRANGE_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOCKRANGE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BLOCKRANGE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		BlockRange* GetEnumerator()
		{
			return (return (BlockRange*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOCKRANGE_GETENUMERATOR_OFFSET))(nullptr);
		}

	};

