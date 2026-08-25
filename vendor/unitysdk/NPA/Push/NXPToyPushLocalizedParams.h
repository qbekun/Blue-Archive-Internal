#pragma once
#include "../../unitysdk.h"

namespace NPA::Push { class PushLangCode; }
namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_PUSH_NXPTOYPUSHLOCALIZEDPARAMS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC9E00)
#define NPA_PUSH_NXPTOYPUSHLOCALIZEDPARAMS_SETDEFAULT_OFFSET UNITYSDK_OFFSET(0x9CC9EB0)
#define NPA_PUSH_NXPTOYPUSHLOCALIZEDPARAMS_SETLOCALIZATIONS_OFFSET UNITYSDK_OFFSET(0x9CC9F10)
#define NPA_PUSH_NXPTOYPUSHLOCALIZEDPARAMS_ADDLOCALIZATION_OFFSET UNITYSDK_OFFSET(0x9CC9F90)
#define NPA_PUSH_NXPTOYPUSHLOCALIZEDPARAMS_GETSEQ_OFFSET UNITYSDK_OFFSET(0x9CC9FF0)
#define NPA_PUSH_NXPTOYPUSHLOCALIZEDPARAMS_GETDEFAULT_OFFSET UNITYSDK_OFFSET(0x9CCA000)
#define NPA_PUSH_NXPTOYPUSHLOCALIZEDPARAMS_GETLOCALIZATIONS_OFFSET UNITYSDK_OFFSET(0x9CCA010)
#define NPA_PUSH_NXPTOYPUSHLOCALIZEDPARAMS_TOJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x9CC99F0)
#define NPA_PUSH_NXPTOYPUSHLOCALIZEDPARAMS_APPENDJSONTO_OFFSET UNITYSDK_OFFSET(0x9CC8700)

namespace NPA::Push
{
	inline static constexpr unsigned int NXPToyPushLocalizedParams_TypeDefinitionIndex = 27346;

	class NXPToyPushLocalizedParams : public Il2CppObject
	{
	public:
		::System::Int32 _seq; // 0x10
		::System::String* _defaultParam; // 0x18
		Il2CppObject* _localizations; // 0x20

		::System::Void .ctor(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHLOCALIZEDPARAMS_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetDefault(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHLOCALIZEDPARAMS_SETDEFAULT_OFFSET))(str, nullptr);
		}

		::System::Void SetLocalizations(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHLOCALIZEDPARAMS_SETLOCALIZATIONS_OFFSET))(arg, nullptr);
		}

		::System::Void AddLocalization(::NPA::Push::PushLangCode* arg, ::System::String* str)
		{
			((::System::Void(*)(::NPA::Push::PushLangCode*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHLOCALIZEDPARAMS_ADDLOCALIZATION_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 GetSeq()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHLOCALIZEDPARAMS_GETSEQ_OFFSET))(nullptr);
		}

		::System::String* GetDefault()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHLOCALIZEDPARAMS_GETDEFAULT_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizations()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHLOCALIZEDPARAMS_GETLOCALIZATIONS_OFFSET))(nullptr);
		}

		::NPA::SimpleJSON::JSONNode* ToJsonObject()
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHLOCALIZEDPARAMS_TOJSONOBJECT_OFFSET))(nullptr);
		}

		::System::Void AppendJsonTo(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHLOCALIZEDPARAMS_APPENDJSONTO_OFFSET))(arg, nullptr);
		}

	};
}

