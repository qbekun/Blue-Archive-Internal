#pragma once
#include "unitysdk.h"

namespace NPA { class NXPQueryFriendsResult; }
namespace NPA::SimpleJSON { class JSONNode; }

#define <>C__DISPLAYCLASS52_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C78A70)
#define <>C__DISPLAYCLASS52_1__GETPLATFORMFRIENDS_B__1_OFFSET UNITYSDK_OFFSET(0x9C78A80)

	inline static constexpr unsigned int <>c__DisplayClass52_1_TypeDefinitionIndex = 26979;

	class <>c__DisplayClass52_1 : public Il2CppObject
	{
	public:
		::NPA::NXPQueryFriendsResult* queryFriendsResult; // 0x10
		::System::String* platformType; // 0x18
		<>c__DisplayClass52_0* CS$__8__locals1; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS52_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _GetPlatformFriends_b__1(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS52_1__GETPLATFORMFRIENDS_B__1_OFFSET))(arg, nullptr);
		}

	};

