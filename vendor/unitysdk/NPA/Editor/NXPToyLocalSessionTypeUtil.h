#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class NXPToyLocalSessionType; }

#define NPA_EDITOR_NXPTOYLOCALSESSIONTYPEUTIL_EXTRACTLOCALSESSIONTYPE_OFFSET UNITYSDK_OFFSET(0x9D8BC60)
#define NPA_EDITOR_NXPTOYLOCALSESSIONTYPEUTIL_ISARENA_OFFSET UNITYSDK_OFFSET(0x9D8BF70)
#define NPA_EDITOR_NXPTOYLOCALSESSIONTYPEUTIL_ISKRPC_OFFSET UNITYSDK_OFFSET(0x9D8BF90)
#define NPA_EDITOR_NXPTOYLOCALSESSIONTYPEUTIL_ISJPPC_OFFSET UNITYSDK_OFFSET(0x9D8BFA0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPToyLocalSessionTypeUtil_TypeDefinitionIndex = 26295;

	class NXPToyLocalSessionTypeUtil : public Il2CppObject
	{
	public:
		::System::String* LOCAL_SESSION_TYPE_KRPC; // 0x0
		::System::String* LOCAL_SESSION_TYPE_JPPC; // 0x0
		::System::String* LOCAL_SESSION_TYPE_ARENA; // 0x0
		::System::String* LOCAL_SESSION_TYPE_ARENA_WEST; // 0x0
		::System::String* LOCAL_SESSION_TYPE_ARENA_TH; // 0x0
		::System::String* LOCAL_SESSION_TYPE_ARENA_TW; // 0x0
		::System::String* LOCAL_SESSION_TYPE_ARENA_SEA; // 0x0
		::System::String* LOCAL_SESSION_TYPE_ARENA_JP; // 0x0
		::System::String* LOCAL_SESSION_TYPE_PLAY_NOW; // 0x0
		::System::String* LOCAL_SESSION_TYPE_TOY; // 0x0

		::NPA::Editor::NXPToyLocalSessionType* ExtractLocalSessionType(::System::String* str)
		{
			return (return (::NPA::Editor::NXPToyLocalSessionType*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYLOCALSESSIONTYPEUTIL_EXTRACTLOCALSESSIONTYPE_OFFSET))(str, nullptr);
		}

		::System::Boolean IsArena(::NPA::Editor::NXPToyLocalSessionType* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Editor::NXPToyLocalSessionType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYLOCALSESSIONTYPEUTIL_ISARENA_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsKRPC(::NPA::Editor::NXPToyLocalSessionType* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Editor::NXPToyLocalSessionType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYLOCALSESSIONTYPEUTIL_ISKRPC_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsJPPC(::NPA::Editor::NXPToyLocalSessionType* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Editor::NXPToyLocalSessionType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYLOCALSESSIONTYPEUTIL_ISJPPC_OFFSET))(arg, nullptr);
		}

	};
}

