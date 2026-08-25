#pragma once
#include "unitysdk.h"

#define POSTPOSITIONPAIR_GET_POSTPOSITION2_OFFSET UNITYSDK_OFFSET(0x1FDEB80)
#define POSTPOSITIONPAIR_GET_POSTPOSITION1_OFFSET UNITYSDK_OFFSET(0x1FDEB90)
#define POSTPOSITIONPAIR_SET_POSTPOSITION1_OFFSET UNITYSDK_OFFSET(0x1FDEBA0)
#define POSTPOSITIONPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FDEB30)
#define POSTPOSITIONPAIR_SET_POSTPOSITION2_OFFSET UNITYSDK_OFFSET(0x1FDEBB0)

	inline static constexpr unsigned int PostpositionPair_TypeDefinitionIndex = 3054;

	class PostpositionPair : public Il2CppObject
	{
	public:
		::System::String* _Postposition1_k__BackingField; // 0x10
		::System::String* _Postposition2_k__BackingField; // 0x18

		::System::String* get_Postposition2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPOSITIONPAIR_GET_POSTPOSITION2_OFFSET))(nullptr);
		}

		::System::String* get_Postposition1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPOSITIONPAIR_GET_POSTPOSITION1_OFFSET))(nullptr);
		}

		::System::Void set_Postposition1(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + POSTPOSITIONPAIR_SET_POSTPOSITION1_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + POSTPOSITIONPAIR_.CTOR_OFFSET))(str, str2, nullptr);
		}

		::System::Void set_Postposition2(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + POSTPOSITIONPAIR_SET_POSTPOSITION2_OFFSET))(str, nullptr);
		}

	};

