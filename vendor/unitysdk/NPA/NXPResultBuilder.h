#pragma once
#include "../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_NXPRESULTBUILDER_GENERATERESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_NXPRESULTBUILDER_GENERATEOBJECT_OFFSET UNITYSDK_OFFSET(0x9BBF420)
#define NPA_NXPRESULTBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BC07D0)

namespace NPA
{
	inline static constexpr unsigned int NXPResultBuilder_TypeDefinitionIndex = 25550;

	class NXPResultBuilder : public Il2CppObject
	{
	public:
		Il2CppObject* GenerateResult(::NPA::SimpleJSON::JSONNode* arg)
		{
			return (return (Il2CppObject*(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPRESULTBUILDER_GENERATERESULT_OFFSET))(arg, nullptr);
		}

		::System::Object* GenerateObject(::System::Type* arg, ::NPA::SimpleJSON::JSONNode* arg, ::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::NPA::SimpleJSON::JSONNode*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPRESULTBUILDER_GENERATEOBJECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPRESULTBUILDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

