#pragma once
#include "../../unitysdk.h"

namespace NPA::Ex { class Group; }

#define NPA_EX_GROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D1D950)
#define NPA_EX_GROUP_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9D1D960)
#define NPA_EX_GROUP_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D1D970)

namespace NPA::Ex
{
	inline static constexpr unsigned int Group_TypeDefinitionIndex = 25981;

	class Group : public Il2CppObject
	{
	public:
		::NPA::Ex::Group* APPLICANT; // 0x0
		::NPA::Ex::Group* MOCK; // 0x1
		::System::SByte value; // 0x10

		::System::Void .ctor(::System::SByte arg)
		{
			((::System::Void(*)(::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_GROUP_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::SByte op_Implicit(::NPA::Ex::Group* arg)
		{
			return (return (::System::SByte(*)(::NPA::Ex::Group*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_GROUP_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_GROUP_.CCTOR_OFFSET))(nullptr);
		}

	};
}

