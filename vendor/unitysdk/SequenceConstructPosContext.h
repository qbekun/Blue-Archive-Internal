#pragma once
#include "unitysdk.h"

#define SEQUENCECONSTRUCTPOSCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0F690)

	inline static constexpr unsigned int SequenceConstructPosContext_TypeDefinitionIndex = 27976;

	class SequenceConstructPosContext : public Il2CppObject
	{
	public:
		::System::Xml::Schema::SequenceNode* this_; // 0x10
		::System::Xml::Schema::BitSet* firstpos; // 0x18
		::System::Xml::Schema::BitSet* lastpos; // 0x20
		::System::Xml::Schema::BitSet* lastposLeft; // 0x28
		::System::Xml::Schema::BitSet* firstposRight; // 0x30

		::System::Void .ctor(::System::Xml::Schema::SequenceNode* arg, ::System::Xml::Schema::BitSet* arg, ::System::Xml::Schema::BitSet* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::SequenceNode*, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCECONSTRUCTPOSCONTEXT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

