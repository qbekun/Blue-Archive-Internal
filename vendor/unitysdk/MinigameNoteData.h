#pragma once
#include "unitysdk.h"

class NoteLine;
class NoteType;
class NoteProperty;

#define MINIGAMENOTEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xD15060)

	inline static constexpr unsigned int MinigameNoteData_TypeDefinitionIndex = 657;

	class MinigameNoteData : public Il2CppObject
	{
	public:
		::System::Single TimePosition; // 0x10
		NoteLine* LinePosition; // 0x14
		::System::Int32 Option; // 0x18
		NoteType* Type; // 0x1C
		NoteProperty* Property; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMENOTEDATA_.CTOR_OFFSET))(nullptr);
		}

	};

