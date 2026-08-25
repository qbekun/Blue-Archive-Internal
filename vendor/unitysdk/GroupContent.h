#pragma once
#include "unitysdk.h"

#define GROUPCONTENT_COPY_OFFSET UNITYSDK_OFFSET(0x98D86F0)
#define GROUPCONTENT_COPY_OFFSET UNITYSDK_OFFSET(0x98CFE90)
#define GROUPCONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x98CE680)

	inline static constexpr unsigned int GroupContent_TypeDefinitionIndex = 28108;

	class GroupContent : public Il2CppObject
	{
	public:
		::System::UInt32 _MinVal; // 0x10
		::System::UInt32 _MaxVal; // 0x14
		::System::Boolean _HasMaxAttr; // 0x18
		::System::Boolean _HasMinAttr; // 0x19
		::System::Int32 _Order; // 0x1C

		::System::Void Copy(GroupContent* arg, GroupContent* arg)
		{
			((::System::Void(*)(GroupContent*, GroupContent*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPCONTENT_COPY_OFFSET))(arg, arg, nullptr);
		}

		GroupContent* Copy(GroupContent* arg)
		{
			return (return (GroupContent*(*)(GroupContent*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPCONTENT_COPY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPCONTENT_.CTOR_OFFSET))(nullptr);
		}

	};

