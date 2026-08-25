#pragma once
#include "unitysdk.h"

namespace NPA { class NXPPushPolicy; }
namespace NPA { class NXPPushPolicies; }

#define SERIALIZATIONEXTENSION_APPENDASJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x9CDBE70)
#define SERIALIZATIONEXTENSION_APPENDASJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x9CDBA30)

	inline static constexpr unsigned int SerializationExtension_TypeDefinitionIndex = 27532;

	class SerializationExtension : public Il2CppObject
	{
	public:
		::System::Void AppendAsJsonObject(::System::Text::StringBuilder* arg, ::System::String* str, ::NPA::NXPPushPolicy* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::NPA::NXPPushPolicy*, ::PVOID))((::PBYTE)hIl2Cpp + SERIALIZATIONEXTENSION_APPENDASJSONOBJECT_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void AppendAsJsonObject(::System::Text::StringBuilder* arg, ::System::String* str, ::NPA::NXPPushPolicies* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::NPA::NXPPushPolicies*, ::PVOID))((::PBYTE)hIl2Cpp + SERIALIZATIONEXTENSION_APPENDASJSONOBJECT_OFFSET))(arg, str, arg, nullptr);
		}

	};

