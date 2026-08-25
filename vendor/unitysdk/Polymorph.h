#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }
namespace MXUnderCover { class SkillUseParameter; }

#define POLYMORPH_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xDA4EB0)
#define POLYMORPH_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA4F60)

	inline static constexpr unsigned int Polymorph_TypeDefinitionIndex = 9851;

	class Polymorph : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg, ::MXUnderCover::SkillUseParameter* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::SkillUseParameter*, ::PVOID))((::PBYTE)hIl2Cpp + POLYMORPH_CO_INTERNALINVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLYMORPH_.CTOR_OFFSET))(nullptr);
		}

	};

