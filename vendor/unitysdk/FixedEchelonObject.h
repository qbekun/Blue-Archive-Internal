#pragma once
#include "unitysdk.h"

#define FIXEDECHELONOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EEBDF0)

	inline static constexpr unsigned int FixedEchelonObject_TypeDefinitionIndex = 1872;

	class FixedEchelonObject : public Il2CppObject
	{
	public:
		::System::Int64 LeaderId; // 0x10
		::System::Int64 TSAInteractionServerId; // 0x18
		Il2CppObject* MainCharacters; // 0x20
		Il2CppObject* SupportCharacters; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIXEDECHELONOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

