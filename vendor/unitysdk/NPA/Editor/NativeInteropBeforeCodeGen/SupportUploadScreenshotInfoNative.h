#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::NativeInteropBeforeCodeGen
{
	inline static constexpr unsigned int SupportUploadScreenshotInfoNative_TypeDefinitionIndex = 26807;

	class SupportUploadScreenshotInfoNative : public Il2CppObject
	{
	public:
		::System::Int32 imageData; // 0x10
		::System::Int32 imageDataSize; // 0x18
		::System::String* mediaType; // 0x20
		::System::String* id; // 0x28
		::System::String* title; // 0x30
		::System::String* situation; // 0x38
		::System::String* location; // 0x40
		::System::String* authToken; // 0x48
		::System::Int32 isGuest; // 0x50
		::System::String* apiId; // 0x58

	};
}

