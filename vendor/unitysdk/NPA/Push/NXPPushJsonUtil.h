#pragma once
#include "../../unitysdk.h"

#define NPA_PUSH_NXPPUSHJSONUTIL_APPENDESCAPEDSTRING_OFFSET UNITYSDK_OFFSET(0x9CC84D0)
#define NPA_PUSH_NXPPUSHJSONUTIL_APPENDSTRINGFIELD_OFFSET UNITYSDK_OFFSET(0x9CC6B00)
#define NPA_PUSH_NXPPUSHJSONUTIL_APPENDINTFIELD_OFFSET UNITYSDK_OFFSET(0x9CC8290)
#define NPA_PUSH_NXPPUSHJSONUTIL_APPENDBOOLFIELD_OFFSET UNITYSDK_OFFSET(0x9CC8340)

namespace NPA::Push
{
	inline static constexpr unsigned int NXPPushJsonUtil_TypeDefinitionIndex = 27359;

	class NXPPushJsonUtil : public Il2CppObject
	{
	public:
		::System::Void AppendEscapedString(::System::Text::StringBuilder* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHJSONUTIL_APPENDESCAPEDSTRING_OFFSET))(arg, str, nullptr);
		}

		::System::Void AppendStringField(::System::Text::StringBuilder* arg, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHJSONUTIL_APPENDSTRINGFIELD_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void AppendIntField(::System::Text::StringBuilder* arg, ::System::String* str, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHJSONUTIL_APPENDINTFIELD_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void AppendBoolField(::System::Text::StringBuilder* arg, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHJSONUTIL_APPENDBOOLFIELD_OFFSET))(arg, str, arg, arg, nullptr);
		}

	};
}

