#pragma once
#include "../../unitysdk.h"

namespace NPA::Community { class NXToyCommunityUser; }

#define NPA_COMMUNITY_NXTOYCOMMUNITYTHREAD_NXTOYCOMMUNITYTHREADTYPE_VALUEORNULLOF_OFFSET UNITYSDK_OFFSET(0x9CD9370)
#define NPA_COMMUNITY_NXTOYCOMMUNITYTHREAD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD97A0)

namespace NPA::Community
{
	inline static constexpr unsigned int NXToyCommunityThread_TypeDefinitionIndex = 27474;

	class NXToyCommunityThread : public Il2CppObject
	{
	public:
		::System::Int64 threadId; // 0x10
		::System::Int64 boardId; // 0x18
		::System::String* boardTitle; // 0x20
		::System::Int64 userId; // 0x28
		::System::String* threadType; // 0x30
		::System::String* title; // 0x38
		::System::String* content; // 0x40
		Il2CppObject* tags; // 0x48
		::System::String* summary; // 0x50
		::System::String* thumbnailImageUrl; // 0x58
		::System::String* release; // 0x60
		::System::Boolean isSticky; // 0x68
		::System::Int32 pictureCount; // 0x6C
		::System::Int32 videoCount; // 0x70
		::System::Int32 readCount; // 0x74
		::System::Int32 likeCount; // 0x78
		::System::Int32 reportCount; // 0x7C
		::System::Int32 commentCount; // 0x80
		::System::String* createDate; // 0x88
		::NPA::Community::NXToyCommunityUser* user; // 0x90
		NXPToyCommunityThreadEmotion* threadEmotion; // 0x98
		Il2CppObject* files; // 0xA0

		Il2CppObject* NXToyCommunityThreadType_valueOrNullOf(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_COMMUNITY_NXTOYCOMMUNITYTHREAD_NXTOYCOMMUNITYTHREADTYPE_VALUEORNULLOF_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_COMMUNITY_NXTOYCOMMUNITYTHREAD_.CTOR_OFFSET))(nullptr);
		}

	};
}

